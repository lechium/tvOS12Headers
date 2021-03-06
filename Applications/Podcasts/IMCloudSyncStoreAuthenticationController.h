//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMCloudSyncStoreAuthenticationController : NSObject
{
    NSString *_acceptedDSIDUserDefaultsKey;	// 8 = 0x8
    NSString *_acceptedDSIDTextUserDefaultsKey;	// 16 = 0x10
    _Bool _shouldAuthenticate;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *acceptedDSIDTextUserDefaultsKey; // @synthesize acceptedDSIDTextUserDefaultsKey=_acceptedDSIDTextUserDefaultsKey;
@property(copy, nonatomic) NSString *acceptedDSIDUserDefaultsKey; // @synthesize acceptedDSIDUserDefaultsKey=_acceptedDSIDUserDefaultsKey;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly, nonatomic) NSString *DSIDText;
@property(readonly, nonatomic) NSString *DSID;
@property(retain, nonatomic) NSString *acceptedDSIDText; // @dynamic acceptedDSIDText;
@property(retain, nonatomic) NSString *acceptedDSID; // @dynamic acceptedDSID;
- (void)resetAcceptedCredentials;	// IMP=0x0000000100209f6c
- (id)authenticationErrorsForTransaction:(id)arg1;	// IMP=0x0000000100209e20
- (_Bool)shouldForceAuthenticationForTransaction:(id)arg1;	// IMP=0x0000000100209dc0
- (_Bool)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100209cf0
- (void)dealloc;	// IMP=0x0000000100209c70
- (id)init;	// IMP=0x0000000100209be8

@end

