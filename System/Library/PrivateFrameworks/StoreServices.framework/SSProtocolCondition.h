/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSProtocolCondition : NSObject {

	long long _operator;
	id _value;

}
+(id)newConditionWithDictionary:(id)arg1 ;
-(BOOL)evaluateWithContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end
