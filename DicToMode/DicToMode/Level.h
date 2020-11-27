//
//  Level.h
//  DictToModelDemo
//
//  Created by wjx on 2020/11/26.
//  Copyright © 2020 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Vip.h"
NS_ASSUME_NONNULL_BEGIN

@interface Level : NSObject
@property (nonatomic, strong) NSString *normal;
@property (nonatomic, strong) Vip *vip;
@property (nonatomic, strong) NSString *svip;
@end

NS_ASSUME_NONNULL_END
