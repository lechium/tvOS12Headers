/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject {

	BSTransaction* _childTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction * childTransaction;                 //@synthesize childTransaction=_childTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;              //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(unsigned long long)schedulingPolicy;
-(id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction *)childTransaction;
@end

