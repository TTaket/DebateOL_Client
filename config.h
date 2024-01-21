#pragma once

#ifndef GLOBAL_CONFIG
#define GLOBAL_CONFIG
#include <QString>
//重传次数
const int RETRY_TIMES = 3;

//公网ip
//const QString PUBLIC_IP ="43.138.161.192";
const QString PUBLIC_IP ="110.42.98.27";

//各个服务端口
const QString TSET_GET_PORT  = "7100";
const QString TEST_POST_PORT = "7100";
const QString ECHO_POST_PORT = "7100";
const QString VIDEO_POST_PORT = "7100";
const QString PUBLIC_PORT = "7100";

//各个地址
const QString ECHO_POST_PATH = "/echo";
const QString VIDEO_UPLOAD_POST_PATH = "/videoupload";
const QString VIDEO_CLEAN_POST_PATH = "/videoclean";
const QString VIDEO_DOWNLOAD_GET_PATH = "/videodownload/";
const QString USER_LOGIN_PATH = "/usertellogin";

//URL
const QString TEST_GET_URL  =   "http://" + PUBLIC_IP + ":" + TSET_GET_PORT;
const QString TEST_POST_URL =   "http://" + PUBLIC_IP + ":" + TEST_POST_PORT;
const QString ECHO_POST_URL =   "http://" + PUBLIC_IP + ":" + ECHO_POST_PORT +  ECHO_POST_PATH;
const QString VIDEO_UPLOAD_POST_URL =   "http://" + PUBLIC_IP + ":" + VIDEO_POST_PORT +  VIDEO_UPLOAD_POST_PATH;
const QString VIDEO_CLEAN_POST_URL =   "http://" + PUBLIC_IP + ":" + VIDEO_POST_PORT +  VIDEO_CLEAN_POST_PATH;
const QString VIDEO_DOWNLOAD_GET_URL =   "http://" + PUBLIC_IP + ":" + VIDEO_POST_PORT +  VIDEO_DOWNLOAD_GET_PATH;

const QString USER_LOGIN_URL =   "http://" + PUBLIC_IP + ":" + PUBLIC_PORT +  USER_LOGIN_PATH;
//net 事件注册表大小
const int MAX_EVENTNUM = 3600000 + 10;

//状态字
#define VIDEO_OK 200
#define VIDEO_NO_PNG 300
#define VIDEO_WRONG_DOWNLOAD_TYPE 400

#define AUDIO_OK 200
#define AUDIO_NO_INFO 300
#define AUDIO_WRONG_DOWNLOAD_TYPE 400

#define USER_ACTION_OK           200
#define USER_WRONG_DOWNLOAD_TYPE 400
#define USER_LOWACLevel          403
#define USER_TIMEOUT_JWT         405
#define USER_ERR_REQINFO         406 //
#define USER_LOGIN_ERRINFO       408 //
#define User_Reg_Havethisnum     409 //
#define User_Reg_Havethistel     410 //
#define User_Logoff_notonline    415
#define User_JWT_NOTOUTTIME      420
#define User_REJWT_NOTOUTTIME    421
#define User_REJWT_HAVEOUTTIME   422
#define USER_DAL_ERR             502


//typeid
const int Video_Upload_SendInfo_TypeId = 101;
const int Video_Upload_RecvInfo_TypeId = 102;
const int Video_Download_SendInfo_TypeId = 103;
const int Video_Download_RecvInfo_TypeId = 104;
const int Video_Clean_SendInfo_TypeId = 105;

const int Audio_Upload_SendInfo_TypeId = 201;
const int Audio_Upload_RecvInfo_TypeId = 202;
const int Audio_Download_SendInfo_TypeId = 203;
const int Audio_Download_RecvInfo_TypeId = 204;
const int Audio_Clean_SendInfo_TypeId = 205;

const int User_GetBaseInfo_SendInfo_TypeId   = 301;
const int User_GetBaseInfo_RecvInfo_TypeId   = 302;
const int User_GetSocialInfo_SendInfo_TypeId = 303;
const int User_GetSocialInfo_RecvInfo_TypeId = 304;
const int User_GetExtraInfo_SendInfo_TypeId  = 305;
const int User_GetExtraInfo_RecvInfo_TypeId  = 306;

const int User_LoginNum_SendInfo_TypeId = 310;
const int User_LoginTel_SendInfo_TypeId = 311;
const int User_Login_RecvInfo_TypeId    = 312;
const int User_Reg_SendInfo_TypeId      = 313;
const int User_Reg_RecvInfo_TypeId      = 314;

const int User_logoff_SendInfo_TypeId          = 321;
const int User_logoff_RecvInfo_TypeId          = 322;
const int User_refresh_jwt1_SendInfo_TypeId    = 323;
const int User_refresh_jwt1_RecvInfo_TypeId    = 324;
const int User_refresh_jwt2_SendInfo_TypeId    = 325;
const int User_refresh_jwt2_RecvInfo_TypeId    = 326;
const int User_friend_SendInfo_TypeId          = 331;
const int User_friend_RecvInfo_TypeId          = 332;
const int User_follow_SendInfo_TypeId          = 333;
const int User_follow_RecvInfo_TypeId          = 334;
const int User_followed_SendInfo_TypeId        = 335;
const int User_followed_RecvInfo_TypeId        = 336;
const int User_ModifyBaseInfo_SendInf_TypeId   = 341;
const int User_ModifyBaseInfo_RecvInfo_TypeId  = 342;
const int User_ModifySocialInfo_SendInfo_TypeId= 343;
const int User_ModifySocialInfo_RecvInfo_TypeId= 344;
const int User_ModifyExInfo_SendInfo_TypeId    = 345;
const int User_ModifyExInfo_RecvInfo_TypeId    = 346;


//时间
const int time_hour   = 60*60;
const int time_minute = 60   ;
const int time_second = 1    ;
const int jwt_time         = 10*time_minute;
const int refresh_jwt_time =  2*time_hour  ;

//密码加密：
// 1. 登陆申请提交的是 base64 + sha256 的passwd
// 2. 盐是            base64 + sha256 的存入数据库
// 3. 数据库中的密码 是上述两个相加 之后 sha256 存入数据库


#endif
