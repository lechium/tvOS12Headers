/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATransaction : NSObject {

	NSString* _label;
	NSString* _transactionId;

}

@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * transactionId;              //@synthesize transactionId=_transactionId - In the implementation block
-(NSString *)transactionId;
-(id)init;
-(void)dealloc;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
@end

