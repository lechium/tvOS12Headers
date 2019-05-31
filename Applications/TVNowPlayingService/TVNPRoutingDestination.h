//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, UIImage;

@interface TVNPRoutingDestination : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_singleLineTitle;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_destinationName;	// 40 = 0x28
    _Bool _isCurrentDestination;	// 48 = 0x30
    _Bool _local;	// 49 = 0x31
    unsigned long long _playbackState;	// 56 = 0x38
    unsigned long long _effectiveDeviceType;	// 64 = 0x40
    NSString *_uniqueIdentifier;	// 72 = 0x48
    NSNumber *_volumeLevel;	// 80 = 0x50
    NSString *_nowPlayingBundleIdentifier;	// 88 = 0x58
    _Bool _paired;	// 96 = 0x60
    _Bool _connected;	// 97 = 0x61
    _Bool _disconnected;	// 98 = 0x62
}

@property(readonly, nonatomic, getter=isDisconnected) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(readonly, nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) unsigned long long effectiveDeviceType; // @synthesize effectiveDeviceType=_effectiveDeviceType;
@property(copy, nonatomic) NSString *nowPlayingBundleIdentifier; // @synthesize nowPlayingBundleIdentifier=_nowPlayingBundleIdentifier;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) _Bool isCurrentDestination; // @synthesize isCurrentDestination=_isCurrentDestination;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *singleLineTitle; // @synthesize singleLineTitle=_singleLineTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010000ae14
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x000000010000ac98
- (void)connectAndPair;	// IMP=0x000000010000ac94
- (void)togglePlayPause;	// IMP=0x000000010000ac90
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x000000010000ac5c
- (id)init;	// IMP=0x000000010000ac44

@end

