//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, TVSiCloudAccountManager;

@interface TVSettingsICloudAccountFacade : NSObject
{
    ACAccount *_lazyActiveAccount;	// 8 = 0x8
    TVSiCloudAccountManager *_accountManager;	// 16 = 0x10
}

+ (_Bool)automaticallyNotifiesObserversOfLazyActiveAccount;	// IMP=0x000000010000b904
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void).cxx_destruct;	// IMP=0x000000010000bc68
@property(retain, nonatomic) ACAccount *lazyActiveAccount;
- (id)initWithAccountManager:(id)arg1;	// IMP=0x000000010000b6e8

@end
