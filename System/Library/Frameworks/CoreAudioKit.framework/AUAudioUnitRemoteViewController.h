/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/AUAudioUnitHostViewProtocol.h>

@class NSString;

@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitHostViewProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id)serviceViewControllerInterface;
-(id)exportedInterface;
@end

