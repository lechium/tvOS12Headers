/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCalorieUserInfo : CMLogItem {

	double fAge;
	long long fGender;
	double fHeight;
	double fWeight;
	long long fCondition;

}

@property (nonatomic,readonly) long long gender; 
@property (nonatomic,readonly) double age; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) long long condition; 
+(id)genderString:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5 ;
-(id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 ;
-(double)age;
-(long long)gender;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(double)weight;
-(long long)condition;
@end

