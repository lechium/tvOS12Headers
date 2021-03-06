/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(float)distance;
-(id)left;
-(id)right;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
-(int)nodeId;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(BOOL)freeNodeOnDealloc;
-(void)dealloc;
-(id)descriptor;
-(void*)node;
-(void)setNode:(void*)arg1 ;
@end

