//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBSDisplayAssistantPresentationRequest;

@interface TVSettingsDisplayAssistantActionInfo : NSObject
{
    NSString *_localizedTitle;	// 8 = 0x8
    NSString *_localizedDescription;	// 16 = 0x10
    PBSDisplayAssistantPresentationRequest *_presentationRequest;	// 24 = 0x18
}

@property(retain, nonatomic) PBSDisplayAssistantPresentationRequest *presentationRequest; // @synthesize presentationRequest=_presentationRequest;
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void).cxx_destruct;	// IMP=0x00000001000875f4

@end

