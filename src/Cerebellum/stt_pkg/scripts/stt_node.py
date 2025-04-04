import rospy
import json
from stt_pkg.srv import STT, STTResponse
from asr import ASR


class STTNode:
    def __init__(self):
        rospy.init_node("stt_node")
        # 初始化ASR处理器
        asr_model_dir = rospy.get_param("~asr_model_dir", "iic/SenseVoiceSmall")
        self.asr = ASR(asr_model_dir)
        self.default_stt_wav_path = rospy.get_param("~default_stt_wav_path", "stt.wav")
        # 创建服务
        self.service = rospy.Service("srv_stt", STT, self.handle_stt_request)
        rospy.loginfo("STT Service Ready")
        rospy.loginfo(f"stt_node initialized with asr_model_dir={asr_model_dir}")

    def handle_stt_request(self, req):
        """处理服务请求"""
        try:
            # 解析输入JSON
            input_data = json.loads(req.input_json)
            audio_path = input_data.get("file_path", self.default_stt_wav_path)

            # 执行语音识别
            result_txt = self.asr.transcribe(audio_path)

            # 构造响应
            return STTResponse(
                output_json=json.dumps({"status": "success", "asr_result": result_txt})
            )
        except Exception as e:
            return STTResponse(
                output_json=json.dumps({"status": "error", "message": str(e)})
            )


if __name__ == "__main__":
    try:
        node = STTNode()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
