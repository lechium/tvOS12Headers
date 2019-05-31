/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _AUStaticParameterInfo, NSString;

@interface AUParameter : AUParameterNode <NSSecureCoding> {

	BOOL __localValueStale;
	float _value;
	int _numUIObservers;
	int _numRecordingObservers;
	unsigned long long _address;
	NSArray* _dependentParameters;
	_AUStaticParameterInfo* _info;

}

@property (assign,nonatomic) unsigned long long address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) _AUStaticParameterInfo * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL _localValueStale;                             //@synthesize _localValueStale=__localValueStale - In the implementation block
@property (assign,nonatomic) int numUIObservers;                                //@synthesize numUIObservers=_numUIObservers - In the implementation block
@property (assign,nonatomic) int numRecordingObservers;                         //@synthesize numRecordingObservers=_numRecordingObservers - In the implementation block
@property (nonatomic,readonly) float minValue; 
@property (nonatomic,readonly) float maxValue; 
@property (nonatomic,readonly) unsigned unit; 
@property (nonatomic,copy,readonly) NSString * unitName; 
@property (nonatomic,readonly) unsigned flags; 
@property (nonatomic,copy,readonly) NSArray * valueStrings; 
@property (nonatomic,copy,readonly) NSArray * dependentParameters;              //@synthesize dependentParameters=_dependentParameters - In the implementation block
@property (assign,nonatomic) float value;                                       //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)unit;
-(NSString *)unitName;
-(unsigned)_clumpID;
-(NSArray *)valueStrings;
-(id)stringFromValue:(const float*)arg1 ;
-(float)valueFromString:(id)arg1 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)setValue:(float)arg1 extOriginator:(AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(float)_internalValue;
-(id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned)arg6 unitName:(id)arg7 flags:(unsigned)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(void)set_clumpID:(unsigned)arg1 ;
-(NSArray *)dependentParameters;
-(BOOL)_localValueStale;
-(void)set_localValueStale:(BOOL)arg1 ;
-(int)numUIObservers;
-(void)setNumUIObservers:(int)arg1 ;
-(int)numRecordingObservers;
-(void)setNumRecordingObservers:(int)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long long)address;
-(unsigned)flags;
-(float)maxValue;
-(float)minValue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(_AUStaticParameterInfo *)info;
-(void)setInfo:(_AUStaticParameterInfo *)arg1 ;
@end
