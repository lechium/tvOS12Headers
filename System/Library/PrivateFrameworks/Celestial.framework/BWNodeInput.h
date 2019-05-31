/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWNode, BWNodeConnection, BWNodeInputMediaConfiguration, NSMutableDictionary, BWNodeInputMediaProperties, BWFormatRequirements, BWFormat, BWVideoFormat, NSArray;

@interface BWNodeInput : NSObject {

	NSString* _name;
	BOOL _mediaTypeIsVideo;
	long long _configurationID;
	unsigned _mediaType;
	unsigned long long _index;
	BOOL _enabled;
	BWNode* _node;
	BWNodeConnection* _connection;
	long long _liveConfigurationID;
	unsigned _numberOfBuffersReceived;
	unsigned _numberOfBuffersDropped;
	BWNodeInputMediaConfiguration* _primaryMediaConfiguration;
	BWNodeInputMediaConfiguration* _unspecifiedAttachedMediaConfiguration;
	NSMutableDictionary* _attachedMediaConfigurations;
	BWNodeInputMediaProperties* _primaryMediaProperties;
	NSMutableDictionary* _attachedMediaProperties;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements; 
@property (nonatomic,retain) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) BOOL passesBuffersDownstream; 
@property (assign,nonatomic) int retainedBufferCount; 
@property (assign,nonatomic) int delayedBufferCount; 
@property (assign,nonatomic) int indefinitelyHeldBufferCount; 
@property (nonatomic,readonly) BOOL mediaTypeIsVideo;                                                            //@synthesize mediaTypeIsVideo=_mediaTypeIsVideo - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                                                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) BWNodeConnection * connection;                                                      //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long configurationID;                                                          //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaConfiguration * primaryMediaConfiguration;                        //@synthesize primaryMediaConfiguration=_primaryMediaConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedAttachedMediaKeys; 
@property (nonatomic,retain) BWNodeInputMediaConfiguration * unspecifiedAttachedMediaConfiguration;              //@synthesize unspecifiedAttachedMediaConfiguration=_unspecifiedAttachedMediaConfiguration - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaProperties * primaryMediaProperties;                              //@synthesize primaryMediaProperties=_primaryMediaProperties - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedAttachedMediaKeys; 
@property (nonatomic,readonly) long long liveConfigurationID;                                                    //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersReceived;                                                 //@synthesize numberOfBuffersReceived=_numberOfBuffersReceived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                                                  //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 index:(unsigned long long)arg3 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(BWVideoFormat *)videoFormat;
-(void)setPassthroughMode:(int)arg1 ;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeInputMediaConfiguration *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(BWNodeInputMediaConfiguration *)primaryMediaConfiguration;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)_setPrimaryProperties:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(void)_handleConfigurationLiveMessage:(id)arg1 ;
-(BWNodeInputMediaProperties *)primaryMediaProperties;
-(BWFormat *)liveFormat;
-(int)passthroughMode;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(NSArray *)specifiedAttachedMediaKeys;
-(NSArray *)resolvedAttachedMediaKeys;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(BOOL)mediaTypeIsVideo;
-(BWNodeInputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersReceived;
-(unsigned)numberOfBuffersDropped;
-(int)retainedBufferCount;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(void)setPassesBuffersDownstream:(BOOL)arg1 ;
-(BOOL)passesBuffersDownstream;
-(void)setFormat:(BWFormat *)arg1 ;
-(unsigned)mediaType;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)invalidate;
-(unsigned long long)index;
-(BWNode *)node;
-(BWFormat *)format;
-(BWNodeConnection *)connection;
-(void)setConnection:(BWNodeConnection *)arg1 ;
@end

