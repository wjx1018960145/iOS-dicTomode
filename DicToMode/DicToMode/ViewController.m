//
//  ViewController.m
//  DicToMode
//
//  Created by wjx on 2020/11/27.
//

#import "ViewController.h"
#import "NSObject+EnumDictOneLevel.h"

#import "Status.h"
#import "PersonModel.h"
@interface ViewController ()
@property (nonatomic, copy) NSMutableArray *statuses;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // 解析Plist文件
    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"statuses.plist" ofType:nil];
    NSDictionary *statusDict = [NSDictionary dictionaryWithContentsOfFile:filePath];

    // 获取字典数组
    NSArray *dictArr = statusDict[@"statuses"];
    NSMutableArray *statusArr = [NSMutableArray array];
//code=0&data={"userInfo":{"roleNo":"0000000002","lastLoginTime":"2020-11-24 17:25:04","roleFlag":"1","userName":"网点社操作员"},"token":"5d60ab6bf0d64899952f38bdb7042010"}&message=操作成功&status=success
    // 遍历字典数组
    NSDictionary *dic = @{
        @"code":@"0",
        @"data":@{
                @"userinfo":@{
                        @"roleNo":@"0000000002",
                        @"lastLoginTime":@"2020-11-24 17:25:04",
                        @"roleFlag":@"1",
                        @"userName":@"网点社操作员",
                        @"level":@{
                                @"normal":@"1",
                                @"vip":@{
                                        @"start":@"1",
                                        @"time":@"2020-02-02"
                                },
                                @"svip":@"3"
                        }
                },
                @"token":@"5d60ab6bf0d64899952f38bdb7042010"
        },
        @"message":@"操作成功",
        @"status":@"success"
    };
    
    
    Status *status = [Status cm_modelWithDict:dic];
    [statusArr addObject:status];
    
//    for (NSDictionary *dict in dictArr) {
//
//        Status *status = [Status cm_modelWithDict:dict];
//
//        [statusArr addObject:status];
//    }
    
    
    NSLog(@"%@",statusArr);
    // Do any additional setup after loading the view.
}


@end
