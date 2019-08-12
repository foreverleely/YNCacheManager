//
//  YNCacheManager.h
//  YNCacheManagerDemo
//
//  Created by liyangly on 2019/8/9.
//  Copyright © 2019 liyang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNCacheManager : NSObject

+ (YNCacheManager *)share;

- (id)getDiskCacheWithModelClass:(Class)className Key:(NSString *)key;
- (id)getDiskCacheWithOutCreateWithModelClass:(Class)className Key:(NSString *)key;

- (void)saveDiskCacheWithModel:(id)model Key:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
