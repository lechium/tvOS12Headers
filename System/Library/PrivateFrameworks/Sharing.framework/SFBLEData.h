/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SFBLEData : NSObject {

	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

