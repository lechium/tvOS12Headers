/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CSAsset, NSDictionary;

@interface CSSpIdContext : NSObject {

	NSString* _uniqueUttTag;
	unsigned long long _activeChannel;
	CSAsset* _asset;
	NSString* _locale;
	NSDictionary* _vtEventInfo;
	unsigned long long _invocationStyle;

}

@property (assign,nonatomic) unsigned long long invocationStyle;              //@synthesize invocationStyle=_invocationStyle - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSDictionary * vtEventInfo;                      //@synthesize vtEventInfo=_vtEventInfo - In the implementation block
@property (nonatomic,retain) NSString * uniqueUttTag;                         //@synthesize uniqueUttTag=_uniqueUttTag - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,readonly) NSString * locale;                             //@synthesize locale=_locale - In the implementation block
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(unsigned long long)activeChannel;
-(unsigned long long)invocationStyle;
-(NSDictionary *)vtEventInfo;
-(NSString *)uniqueUttTag;
-(id)utteranceAudioFilepathForSpIdType:(unsigned long long)arg1 ;
-(id)utteranceMetadataFilePathForSpIdType:(unsigned long long)arg1 ;
-(id)initWithSpIdInvocationStyle:(unsigned long long)arg1 asset:(id)arg2 locale:(id)arg3 vtEventInfo:(id)arg4 ;
-(void)setInvocationStyle:(unsigned long long)arg1 ;
-(void)setUniqueUttTag:(NSString *)arg1 ;
-(void)setVtEventInfo:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)locale;
-(void)setAsset:(CSAsset *)arg1 ;
-(CSAsset *)asset;
@end

