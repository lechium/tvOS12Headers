/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(id)sourceRendererForEngineContext:(C3DEngineContextRef)arg1 source:(id)arg2 textureSource:(id)arg3 ;
-(void)removeSourceRenderersForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
-(void)rendererDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

