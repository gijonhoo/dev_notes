>> [参考] 应用只有在进程存活的情况下才会按照正常的生命周期进行执行，如果进程突然被kill掉，相当于System.exit(0);进程被杀死，根本不会走（activity，fragment）生命周期。例如安装的一键清理等功能，同样不会被调用。只有在进程不被kill掉，正常情况下才会执行ondestory（）方法。
 [参考]: http://blog.csdn.net/gehongfeide/article/details/76640169


>跨平台移动开发
>> Vue.js >>> WEEX
>
>> React.js >>> ReactNative