/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _audioSettings;
	NSArray* _metadata;

}

@property (nonatomic,copy) NSDictionary * audioSettings;              //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                        //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)audioSettings;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

