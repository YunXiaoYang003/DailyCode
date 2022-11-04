package YunXiaoYang.Test;

//1. 创建一个方法   copyFile(String file1,String file2) throw nofile1Exception
//        实现文件的复制 从file1复制到file2。并判断如果没有file1抛出异常

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

public class Test1 {
    public static void main(String[] args)
    {
        try {
            // 1、创建一个字节输入流管道与原视频接通
           InputStream is=new FileInputStream("project\\src\\YunXiaoYangcode_22.11.3\\out\\production\\project\\YunXiaoYang\\out4.txt");

            // 2、创建一个字节输出流管道与目标文件接通
            OutputStream os=new FileOutputStream("project\\src\\YunXiaoYangcode_22.11.3\\out\\production\\project\\YunXiaoYang\\out5.txt");

            // 3、定义一个字节数组转移数据
            byte[] bytes=new byte[1024];
            int len;
            while((len=is.read())!=-1)
            {
                os.write(bytes, 0 , len);
            }

            // 4、关闭流。
            os.close();
            is.close();

        } catch (Exception e){
            e.printStackTrace();
        }

    }
}
