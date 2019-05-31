/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBSDataResetRequest : NSObject {

	long long _mode;
	long long _options;
	NSString* _reason;

}

@property (assign,nonatomic) long long mode;                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
-(void)setReason:(NSString *)arg1 ;
-(id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(long long)options;
-(long long)mode;
-(void)setOptions:(long long)arg1 ;
-(void)setMode:(long long)arg1 ;
@end

