//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSString, TVHJSMediaServer, TVHJSMediaServerDiscoveryConfiguration;

@protocol TVHJSMediaServerManager <JSExport>
@property(readonly, copy, nonatomic) NSArray *browseableMediaServers;
@property(readonly, copy, nonatomic) NSArray *mediaServers;
@property(readonly, nonatomic) TVHJSMediaServerDiscoveryConfiguration *mediaServerDiscoveryConfiguration;
- (void)updateSettingsForMediaServer:(TVHJSMediaServer *)arg1:(NSString *)arg2;
- (TVHJSMediaServer *)mediaServerWithIdentifier:(NSString *)arg1;
- (void)restartMediaServerDiscovery;
@end

