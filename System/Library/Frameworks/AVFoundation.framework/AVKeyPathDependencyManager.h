/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKeyPathDependencyRegistration.h>

@class AVWeakReference, AVWeakObservableCallbackCancellationHelper, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {

	AVWeakReference* _weakReferenceToDependencyHost;
	AVWeakObservableCallbackCancellationHelper* _callbackCancellationHelper;
	NSMutableSet* _keyPathDependencies;

}
-(id)initWithDependencyHost:(id)arg1 ;
-(void)dependencyHostIsFullyInitialized;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
-(void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2 ;
-(void)dealloc;
@end
