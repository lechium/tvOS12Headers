/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {

	float _minFrequency;
	float _maxFrequency;
	NSMutableArray* _channels;
	long long _sourceType;

}

@property (nonatomic,readonly) NSArray * channels;                //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) float minFrequency;                //@synthesize minFrequency=_minFrequency - In the implementation block
@property (nonatomic,readonly) float maxFrequency;                //@synthesize maxFrequency=_maxFrequency - In the implementation block
@property (nonatomic,readonly) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)channels;
-(float)minFrequency;
-(float)maxFrequency;
-(void)checkNumChannels:(unsigned short)arg1 ;
-(void)applyChannelBins:(id)arg1 channelID:(unsigned short)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sourceType;
@end

