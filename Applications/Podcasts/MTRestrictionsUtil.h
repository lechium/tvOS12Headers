//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRestrictionsUtil : NSObject
{
}

+ (_Bool)_isRestrictedByAdministrator;	// IMP=0x00000001000239ac
+ (_Bool)_supportsExplicitRestrictionAlertOfType:(long long)arg1;	// IMP=0x0000000100023988
+ (_Bool)_fetchIsExplicitContentAllowed;	// IMP=0x0000000100023924
+ (long long)explicitRestrictionAlertTypeForTypeString:(id)arg1;	// IMP=0x0000000100023830
+ (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 presentationCompletion:(CDUnknownBlockType)arg2 actionCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022b90
+ (void)reloadSettings;	// IMP=0x0000000100022a54
+ (_Bool)isExplicitContentAllowed;	// IMP=0x0000000100022998

@end

