/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNMTLRenderPass : NSObject {

	/*^block*/id setupBlock;
	/*^block*/id executeBlock;

}

@property (nonatomic,copy) id setupBlock; 
@property (nonatomic,copy) id executeBlock; 
-(void)setSetupBlock:(id)arg1 ;
-(id)executeBlock;
-(id)setupBlock;
-(void)setup:(id)arg1 ;
-(void)setExecuteBlock:(id)arg1 ;
-(void)dealloc;
-(void)execute:(id)arg1 ;
@end

