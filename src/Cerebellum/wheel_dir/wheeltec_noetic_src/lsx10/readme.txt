版本变更
/***************************************************************
初始版本: LSLIDAR_M10_N10_V2.5.0_221103_ROS
变更内容: 
	1.实现M10/M10_P/M10_PLUS/N10/M10_GPS网口和串口传输数据生成点云功能
    	2.实现点云角度裁剪和距离过滤功能
    	3.可以通过lslidar_order话题控制雷达启
    	4.支持读取pcap包
	
更改日期: 2022-11-03
***************************************************************/


/***************************************************************
初始版本: LSLIDAR_M10_N10_V2.5.0_221103_ROS
变更版本: LSLIDAR_M10_N10_V2.5.1_221130_ROS
变更内容: 
	1.新增L10雷达。
	2.针对M10_P雷达出现的点云问题进行紧急修复。
	3.针对M10和M10_GPS雷达在最近出货雷达出现的点云问题进行紧急修复。
	4.修复循环索取新内存导致机器卡死bug。
	5.更新M10_P和M10_PLUS雷达协议。
	6.修复角度值分配错误问题。
	
更改日期: 2022-11-30
***************************************************************/

/***************************************************************
初始版本: LSLIDAR_M10_N10_V2.5.1_221130_ROS
变更版本: LSLIDAR_M10_N10_V2.5.2_230110_ROS
变更内容: 
	1.日常检测到驱动的包头检测有bug
	2.更新M10系列的角度补偿方法。
	3.修复发现的点角度不连续bug。
	4.添加可选择是否发布pointcloud2话题。
	5.添加可选择是否发布scan话题。
	6.添加双回波解析方法
	7.添加N10_P雷达选择1
	8.添加读txt文件功能
更改日期: 2023-01-10
***************************************************************/

/***************************************************************
初始版本: LSLIDAR_M10_N10_V2.5.2_230110_ROS
变更版本: LSLIDAR_M10_N10_V2.5.3_231110_ROS
变更内容: 
	1.修复M10启停雷达没数据无法启动bug
	2.修复雷达停止时驱动CUP占用率过高。
	3.添加M10启停雷达停止并且不发数据功能。
	4.修复M10P数据错乱导致程序崩溃bug

更改日期: 2023-11-10
***************************************************************/
