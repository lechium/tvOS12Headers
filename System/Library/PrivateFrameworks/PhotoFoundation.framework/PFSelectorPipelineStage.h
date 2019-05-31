/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFPipelineStage.h>

@interface PFSelectorPipelineStage : PFPipelineStage {

	SEL _workSelector;

}

@property (readonly) SEL workSelector;              //@synthesize workSelector=_workSelector - In the implementation block
-(void)invokeWorkForJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithWorkSelector:(SEL)arg1 ;
-(SEL)workSelector;
-(id)description;
@end
