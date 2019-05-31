/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _muted;
	BOOL _audioEnabled;
	BOOL _videoEnabled;
	unsigned long long _identifier;
	TUHandle* _handle;
	long long _streamToken;
	long long _audioPriority;
	long long _videoPriority;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;                            //@synthesize muted=_muted - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;              //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;              //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) long long streamToken;                                //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) long long audioPriority;                              //@synthesize audioPriority=_audioPriority - In the implementation block
@property (assign,nonatomic) long long videoPriority;                              //@synthesize videoPriority=_videoPriority - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TUHandle * handle;                             //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(TUHandle *)handle;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 ;
-(long long)videoPriority;
-(void)setVideoPriority:(long long)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setStreamToken:(long long)arg1 ;
-(long long)streamToken;
-(BOOL)isMuted;
-(void)setAudioPriority:(long long)arg1 ;
-(long long)audioPriority;
-(unsigned long long)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
