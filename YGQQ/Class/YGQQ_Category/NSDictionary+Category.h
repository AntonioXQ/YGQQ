//
//  PK-ios
//  YGQQ
//
//  Created by 许亚光 on 2016/10/28.
//  Copyright © 2016年 xuyaguang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Category)

//用于数据解析，返回对象为字符串或值类型，数组和字典不要用此方法
- (id)safeObjectForKey:(NSString *)key;

//设置键值对 针对对象为空处理
- (void)safeSetObject:(id)object forKey:(id)key;
- (id)objectForKeyCustom:(id)aKey;

- (id)safeKeyForValue:(id)value;

/**
 *  字段转成json的字符串
 *
 *  @return json 字符串
 */
- (NSString *)toJSONStringForDictionary;
@end


