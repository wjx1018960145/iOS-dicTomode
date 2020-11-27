//
//  Userinfo.h
//  DictToModelDemo
//
//  Created by wjx on 2020/11/25.
//  Copyright © 2020 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Level.h"
NS_ASSUME_NONNULL_BEGIN

@interface Userinfo : NSObject

@property (nonatomic, strong) NSString *roleNo;
@property (nonatomic, strong) NSString *lastLoginTime;
@property (nonatomic, strong) NSString *roleFlag;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) Level *level;
@end

NS_ASSUME_NONNULL_END
