/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation {

	NSURL* _source;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSURL * source;                     //@synthesize source=_source - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(VSOptional *)result;
@end

