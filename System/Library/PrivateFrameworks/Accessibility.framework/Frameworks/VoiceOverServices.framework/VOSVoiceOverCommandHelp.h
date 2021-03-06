/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface VOSVoiceOverCommandHelp : NSObject {

	NSBundle* _bundle;

}
+(id)sharedInstance;
-(id)helpTextForCommand:(id)arg1 helpType:(long long)arg2 ;
-(id)helpTextForCommand:(id)arg1 helpType:(long long)arg2 rtlCheck:(/*^block*/id)arg3 ;
-(BOOL)_isRTLCheckRequiredForCommand:(id)arg1 helpType:(long long)arg2 ;
-(id)_locKeyForCommand:(id)arg1 isRTL:(BOOL)arg2 ;
-(id)_locKeyForGesture:(id)arg1 isRTL:(BOOL)arg2 ;
-(id)_locKeyForHandwriting:(id)arg1 isRTL:(BOOL)arg2 ;
-(id)helpTextForLocKey:(id)arg1 ;
-(id)helpSections;
-(id)init;
@end

