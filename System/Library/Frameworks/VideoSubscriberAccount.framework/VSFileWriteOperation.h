/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSError;

@interface VSFileWriteOperation : VSAsyncOperation {

	VSOptional* _data;
	VSOptional* _destination;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSOptional * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) VSOptional * destination;              //@synthesize destination=_destination - In the implementation block
-(void)executionDidBegin;
-(id)init;
-(void)setDestination:(VSOptional *)arg1 ;
-(VSOptional *)destination;
-(VSOptional *)data;
-(void)setData:(VSOptional *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
