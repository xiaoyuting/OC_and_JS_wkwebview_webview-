//
//  wqewq.c
//  WKWebViewOC
//
//  Created by GM on 2018/10/31.
//  Copyright © 2018年 XiaoFeng. All rights reserved.
//

#include "wqewq.h"
//webview 使用交互
// #import "ViewController.h"
// #import <Ugliest/ugliestPlat.h>
// #import <JavaScriptCore/JavaScriptCore.h>
//
// @interface ViewController ()<UIWebViewDelegate,JSExport,LoginCallBack,PurchaseCallBack>
// @property (nonatomic,strong)UIWebView  * webView;
// @property (nonatomic,strong)JSContext  * context;
// @property (nonatomic,strong)UIButton   * refresh;
// @end
//
// @implementation ViewController
//
// - (void)viewDidLoad {
// [super viewDidLoad];
// [self.view addSubview:self.webView];
//
// //    [[NSURLCache sharedURLCache] removeAllCachedResponses];
// //    [[NSURLCache sharedURLCache] setDiskCapacity:0];
// //    [[NSURLCache sharedURLCache] setMemoryCapacity:0];
//
// self.title = @"JSContext普通交互";
// // Do any additional setup after loading the view, typically from a nib.
// }
//
// #pragma mark - UIWebViewDelegate
// - (void)webViewDidFinishLoad:(UIWebView *)webView {
// self.context = [webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
//
// self.context.exceptionHandler = ^(JSContext *context, JSValue *exceptionValue) {
// context.exception = exceptionValue;
// NSLog(@"异常信息：%@", exceptionValue);
// };
// __weak __typeof__(self) weakSelf = self;   // 也可以通过下标的方式获取到方法
// self.context[@"OCSDKLoad"] = ^(){
// dispatch_async(dispatch_get_main_queue(), ^{
// [ugliestPlat login:weakSelf];
// });
// };
// self.context[@"OCSDKexit"] = ^(){
// dispatch_async(dispatch_get_main_queue(), ^{
// [weakSelf logout];
// NSLog(@"callSystemCamera");
// });
// };
// self.context[@"OCSDKswitch"] = ^(){
// dispatch_async(dispatch_get_main_queue(), ^{
// [weakSelf logswitch];
// });
//
// };
//
//
// self.context[@"OCSDKpurchase"] = ^(){
// dispatch_async(dispatch_get_main_queue(), ^{
// [weakSelf pay];
// });
//
// };
//
//
//
//
// self.context[@"showAlertMsg"] = ^(NSString *title, NSString *message){
// NSLog(@"\ntitle=%@\nmessage=%@",title,message);
//
// };
//
// self.context[@"callWithDict"] = ^(id jsonDic){
// NSLog(@"callWithDict:%@",jsonDic);
//
// };
// }
//
// -(void)logout{
// [ugliestPlat logOut];
// }
// - (void)logswitch{
// [ugliestPlat logSwitch];
// }
//
// - (void)pay{
// NSLog(@"当前接口名字混淆后的%s",__FUNCTION__);
// // 使用支付loading
// [ugliestPlat setLoadingOn];
// ugliestOrderModel* mPayInfo = [[ugliestOrderModel alloc] init];
// /** 商品id */
//mPayInfo.ugliestproductID= @"ugliest";
///** Y 商品名 */
//mPayInfo.ugliestproductName=@"商品名字测试";
///** Y 商品价格 */
///*******************************************************/
//mPayInfo.ugliestproductPrice=@"6";//钱数
///*******************************************************/
///** 商品描述（不传则使用productName） */
//mPayInfo.ugliestproductDes=@"商品描述";
///** Y 商品订单号 透传数据*/
//mPayInfo.ugliestgameReceipts=[NSString stringWithFormat:@"这是一堆数据%lf",[[NSDate date] timeIntervalSince1970]];
///** Y 游戏角色id */
//mPayInfo.ugliestroleID=@"554";
///** Y 游戏角色名 */
//mPayInfo.ugliestroleName=@"这是角色名字";
///** Role_Name */
//mPayInfo.ugliestroleLevel=@"10";
///** Y Vip等级 */
//mPayInfo.ugliestvipLevel=@"10";
///** Y 帮派、公会等 */
//mPayInfo.ugliestpartyName=@"这是工会";
///** Y 服务器id，若无填“1” */
//mPayInfo.ugliestzoneID=@"1";
///** Y 服务器名 */
//mPayInfo.ugliestzoneName=@"这是服务器";
///** N 扩展字段 */
//mPayInfo.ugliestext=@"这是扩展字段";
///**
// 回调地址 可传可不传，不传使用默认
// */
////mPayInfo.ugliestnotifyURL = @"http://demo.gm88.com/ok.php?gameid=1156&promote=2";
//[ugliestPlat purchase:self orderInfo:mPayInfo];
//}
//
//-(void)onPurchaseFinish:(ugliestStatus)code purchaseData:(NSDictionary *)Data{
//
//    if(code  ==OD_SUCCESS){
//        NSLog(@"支付成功");
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//
//    }else if (code ==OD_FAILED){
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//        NSLog(@"支付失败");
//
//    }else if (code==OD_CANCEL){
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//
//        NSLog(@"支付取消");
//    }else if (code==OD_UNKNOWN){
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//
//        //@"未知错误"];
//    }
//
//}
//- (void)onFinish:(ugliestStatus)code Data:(NSDictionary *)Data{
//    NSLog(@"用户信息info==%@\n"   , Data);
//
//    if(code== LOGIN_SUCCESS){
//        NSLog(@"登录成功");
//        NSLog(@"info=%@",[Data objectForKey:@"info"]);
//
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//
//    }else if(code== LOGOUT_SUCCESS){
//
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//        NSLog(@"退出成功");
//
//    }else if (LOGIN_SWITCH){
//        NSLog(@"切换账号");
//        [self performSelectorOnMainThread:@selector(doPromot:) withObject:nil waitUntilDone:NO];
//
//    }
//}
//
//
//- (void)didReceiveMemoryWarning {
//    [super didReceiveMemoryWarning];
//    // Dispose of any resources that can be recreated.
//}
//
//- (UIWebView *)webView {
//    if (_webView == nil) {
//        _webView = [[UIWebView alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height)];
//
//        NSURL *url = [[NSBundle mainBundle] URLForResource:@"index" withExtension:@"html"];
//        NSURLRequest *request = [NSURLRequest requestWithURL:url];
//        [_webView loadRequest:request];
//        _webView.scalesPageToFit = YES;
//        _webView.delegate = self;
//        _webView.scrollView.bounces=NO;
//    }
//
//    return _webView;
//}
//- (void)doPromot:(NSString *)qwew {
//
//    JSValue *jsValue = [self.context evaluateScript:@"Promot"];
//    [jsValue callWithArguments:@[@"wqewqewqewqew"]];
//    //[self.webView stringByEvaluatingJavaScriptFromString:@"Promot('message')"];
//}

//
//  ViewController.m
//  haha
//
//  Created by jiang on 17/1/19.
//  Copyright © 2017年 com.meiniucn. All rights reserved.
//
//wkwebview 使用交互
//#import "ViewController.h"
//#import <WebKit/WebKit.h>
//
//@interface ViewController ()<WKScriptMessageHandler>
//
//@property (nonatomic, strong) WKWebView *webView;
//
//@end
//
//@implementation ViewController
//
//- (void)viewDidLoad {
//    [super viewDidLoad];
//    // 设置偏好设置
//    WKWebViewConfiguration *config = [[WKWebViewConfiguration alloc] init];
//    // 默认为0
//    config.preferences.minimumFontSize = 10;
//    //是否支持JavaScript
//    config.preferences.javaScriptEnabled = YES;
//    //不通过用户交互，是否可以打开窗口
//    config.preferences.javaScriptCanOpenWindowsAutomatically = NO;
//
//    self.webView = [[WKWebView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height/2) configuration:config];
//    [self.view addSubview:self.webView];
//
//
//    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"index" ofType:@"html"];
//    NSURL *baseURL = [[NSBundle mainBundle] bundleURL];
//    [self.webView loadHTMLString:[NSString stringWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:nil] baseURL:baseURL];
//
//    WKUserContentController *userCC = config.userContentController;
//    //JS调用OC 添加处理脚本
//    [userCC addScriptMessageHandler:self name:@"showMobile"];
//    [userCC addScriptMessageHandler:self name:@"showName"];
//    [userCC addScriptMessageHandler:self name:@"showSendMsg"];
//
//}
//
//#pragma mark - WKScriptMessageHandler
//
//- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message {
//    NSLog(@"%@",NSStringFromSelector(_cmd));
//    NSLog(@"%@",message.body);
//
//    if ([message.name isEqualToString:@"showMobile"]) {
//        [self showMsg:@"没有参数"];
//    }
//
//    if ([message.name isEqualToString:@"showName"]) {
//        NSString *info = [NSString stringWithFormat:@"%@",message.body];
//        [self showMsg:info];
//    }
//
//    if ([message.name isEqualToString:@"showSendMsg"]) {
//        NSArray *array = message.body;
//        NSString *info = [NSString stringWithFormat:@"有两个参数: %@, %@ !!",array.firstObject,array.lastObject];
//        [self showMsg:info];
//    }
//}
//
//- (void)showMsg:(NSString *)msg {
//    [[[UIAlertView alloc] initWithTitle:nil message:msg delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil] show];
//}
//
//
////网页加载完成之后调用JS代码才会执行，因为这个时候html页面已经注入到webView中并且可以响应到对应方法
//
////不带参数
//- (IBAction)NOParameter:(id)sender {
//    [self.webView evaluateJavaScript:@"alertMobile()" completionHandler:^(id _Nullable response, NSError * _Nullable error) {
//     //JS 返回结果
//     NSLog(@"%@ %@",response,error);
//     }];
//
//
//}
////一个参数
//- (IBAction)oneParameter:(id)sender {
//    /*
//     *alertName('奥特们打小怪兽')
//     *alertName JS方法名
//     *奥特们打小怪兽 带的参数
//     */
//    [self.webView evaluateJavaScript:@"alertName('奥特们打小怪兽')" completionHandler:nil];
//}
////两个参数
//- (IBAction)twoParameter:(id)sender {
//    /*
//     *alertSendMsg('我是参数1','我是参数2')
//     *alertSendMsg JS方法名
//     *我是参数1 带的参数
//     *我是参数2
//     */
//    [self.webView evaluateJavaScript:@"alertSendMsg('我是参数1','我是参数2')" completionHandler:nil];
//}
//
//
//-(void)removeAllScriptMsgHandle{
//    WKUserContentController *controller = self.webView.configuration.userContentController;
//    [controller removeScriptMessageHandlerForName:@"showMobile"];
//    [controller removeScriptMessageHandlerForName:@"showName"];
//    [controller removeScriptMessageHandlerForName:@"showSendMsg"];
//}
//
//
//
//
//
//@end

