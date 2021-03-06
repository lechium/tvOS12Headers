/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKSettingCollectionProxy : NSObject <OKSettingsSupport> {

	id _listOfObjects;
	/*^block*/id _keyResolverBlock;
	NSString* _keyPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithObjects:(id)arg1 withKeyPath:(id)arg2 ;
-(void)dealloc;
@end

