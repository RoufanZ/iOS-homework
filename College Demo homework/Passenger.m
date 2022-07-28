//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

@end

@implementation Passenger
+ (int)initj{
    int j=0;
    return j;
}
+ (int)initk{
    int k=0;
    return k;
}
- (BOOL)JudgeAge{
    NSDate *now = [NSDate date];
    NSInteger i = [now timeIntervalSince1970] - [self.birthday timeIntervalSince1970];
    if(i>=18)
        return YES;
    else
        return NO;
}
- (BOOL)orderId:(NSNumber *)orderId{
    NSNumber n;
    scanf("%d",&n);
    if(n==*orderId&&j>0){
        self.HistoryOrders[k].orderId=orderId;
        k++;
        j--;
        return YES;
    }
    else
        return NO;
}
@end
- (void)orderName:(NSString *)name departTime:(NSDate *)departTime price:(CGFloat)price{
    self.WaitingOrders[j].name=name;
    self.WaitingOrders[j].departTime=departTime;
    self.WaitingOrders[j].price=price;
    j++;
}
