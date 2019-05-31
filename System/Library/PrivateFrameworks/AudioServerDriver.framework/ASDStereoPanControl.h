/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDStereoPanControl : ASDControl {

	float _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	unsigned _leftPanChannel;
	unsigned _rightPanChannel;
	BOOL _settable;

}

@property (assign,nonatomic) float value; 
@property (assign,nonatomic) unsigned leftPanChannel; 
@property (assign,nonatomic) unsigned rightPanChannel; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
-(BOOL)changeValue:(float)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned)arg8 ;
-(unsigned)leftPanChannel;
-(unsigned)rightPanChannel;
-(void)setPanChannel:(unsigned)arg1 isLeft:(BOOL)arg2 ;
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(void)setLeftPanChannel:(unsigned)arg1 ;
-(void)setRightPanChannel:(unsigned)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
@end

