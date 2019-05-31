/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDate;

@interface CKOperationFlowControlInfo : NSObject {

	NSError* _lastError;
	NSDate* _flowControlEndDate;

}

@property (nonatomic,retain) NSError * lastError;                      //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSDate * flowControlEndDate;              //@synthesize flowControlEndDate=_flowControlEndDate - In the implementation block
+(id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2 ;
-(NSError *)lastError;
-(void)setFlowControlEndDate:(NSDate *)arg1 ;
-(NSDate *)flowControlEndDate;
-(void)setLastError:(NSError *)arg1 ;
@end

