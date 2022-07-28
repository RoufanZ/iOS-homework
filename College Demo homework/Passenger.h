//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
@property (nonatomic,copy) NSString *name;  //公司名称
@property (nonatomic,readonly) NSNumber *orderId;    //车次
@property (nonatomic,assign) NSDate *departTime;    //发车时间
@property (nonatomic,assign,readonly) CGFloat *price;   //价格
@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property (nonatomic,assign) BOOL JudgeAge;
// 历史订单 （数组）
Orders HistoryOrders[30];
@property (nonatomic,strong) Orders *HistoryOrders;
// 未出行订单 （数组）
Orders WaitingOrders[10];
@property (nonatomic,strong) Orders *WaitingOrders;
// Function 方法
// 去订票
- (void)orderName:(NSString *)name time:(NSDate *)departTime price:(CGFloat)price;
// 去检票
- (BOOL)orderId:(NSNumber *)orderId;

+ (int)initj;
+ (int)initk;
@end

NS_ASSUME_NONNULL_END
