/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AMSDialogButton : NSObject {

	/*^block*/id _handler;
	long long _style;
	NSString* _title;

}

@property (nonatomic,copy) id handler;                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)buttonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

