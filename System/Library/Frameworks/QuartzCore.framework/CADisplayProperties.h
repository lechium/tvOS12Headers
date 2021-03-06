/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(unsigned)connectionSeed;
-(void)setConnectionSeed:(unsigned)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(NSString *)overscanAdjustment;
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
@end

