// #include "../login.h"

// QString Login::encrypt(const QString &str){ //字符串MD5算法加密
//     QByteArray btArray = str.toLocal8Bit();  //字符串转换为字节数组数据
//     QCryptographicHash hash(QCryptographicHash::Md5);  //Md5加密算法
//     hash.addData(btArray);  //添加数据到加密哈希值
//     QByteArray resultArray = hash.result();  //返回最终的哈希值
//     QString md5 = resultArray.toHex();       //转换为16进制字符串
//     return md5;
// }
