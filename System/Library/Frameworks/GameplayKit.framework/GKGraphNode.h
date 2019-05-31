/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {

	NSMutableArray* _connectedNodes;
	GKCGraphNode* _cGraphNode;

}

@property (nonatomic,readonly) NSArray * connectedNodes; 
+(BOOL)supportsSecureCoding;
+(id)node;
-(void)removeConnection:(id)arg1 ;
-(NSArray *)connectedNodes;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGraphNode*)cGraphNode;
-(id)findPathToNode:(id)arg1 ;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)findPathFromNode:(id)arg1 ;
-(void)addConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)mutConnectedNodes;
-(void)addConnection:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)removeConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
