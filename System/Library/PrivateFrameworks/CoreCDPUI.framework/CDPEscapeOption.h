/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPEscapeOption : NSObject {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _escapeAction;
	NSString* _progressTitle;
	NSString* _progressLabel;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id escapeAction;                         //@synthesize escapeAction=_escapeAction - In the implementation block
@property (nonatomic,copy) NSString * progressTitle;                //@synthesize progressTitle=_progressTitle - In the implementation block
@property (nonatomic,copy) NSString * progressLabel;                //@synthesize progressLabel=_progressLabel - In the implementation block
+(id)cancelOption;
-(void)setEscapeAction:(id)arg1 ;
-(id)escapeAction;
-(NSString *)progressTitle;
-(void)setProgressTitle:(NSString *)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

