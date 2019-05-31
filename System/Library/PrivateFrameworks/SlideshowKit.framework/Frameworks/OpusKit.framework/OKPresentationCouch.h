/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableArray, NSMutableDictionary, OKPresentationCouchStep;

@interface OKPresentationCouch : OKPresentationCanvas {

	NSString* _restartScript;
	NSMutableArray* _steps;
	NSMutableDictionary* _internalSettings;
	OKPresentationCouchStep* _loopStep;

}

@property (nonatomic,copy,readonly) NSMutableArray * steps;                   //@synthesize steps=_steps - In the implementation block
@property (nonatomic,copy) NSString * restartScript;                          //@synthesize restartScript=_restartScript - In the implementation block
@property (nonatomic,retain) OKPresentationCouchStep * loopStep;              //@synthesize loopStep=_loopStep - In the implementation block
+(id)couchWithName:(id)arg1 settings:(id)arg2 steps:(id)arg3 restartScript:(id)arg4 ;
-(void)addStep:(id)arg1 ;
-(NSMutableArray *)steps;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)closestStepForPageName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 ;
-(id)lastStepForPageName:(id)arg1 ;
-(id)nextStepAfterStep:(id)arg1 canLoop:(BOOL)arg2 ;
-(NSString *)restartScript;
-(void)setRestartScript:(NSString *)arg1 ;
-(OKPresentationCouchStep *)loopStep;
-(void)setLoopStep:(OKPresentationCouchStep *)arg1 ;
-(id)init;
-(id)dictionary;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
@end

