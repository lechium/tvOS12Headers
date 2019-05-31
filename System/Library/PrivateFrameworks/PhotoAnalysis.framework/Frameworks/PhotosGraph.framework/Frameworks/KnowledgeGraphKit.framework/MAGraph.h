/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MADatabase, MALoadRegistry, MAPropertyAccessReporter, NSMutableDictionary, NSMutableArray, NSUUID, NSString;

@interface MAGraph : NSObject <NSXMLParserDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MADatabase* _persistentStore;
	MALoadRegistry* _loadRegistry;
	MAPropertyAccessReporter* _propertyAccessReporter;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByDomain;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	unsigned _lastNodeIdentifier;
	unsigned _lastEdgeIdentifier;
	NSMutableArray* _labelStrings;
	NSMutableDictionary* _labelsForStrings;
	BOOL _usesIdentifyingProperties;
	NSUUID* _identifier;
	unsigned long long _version;
	long long _persistenceOptions;

}

@property (nonatomic,retain) NSUUID * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MADatabase * persistentStore;                                             //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) MALoadRegistry * loadRegistry;                                            //@synthesize loadRegistry=_loadRegistry - In the implementation block
@property (nonatomic,readonly) MAPropertyAccessReporter * propertyAccessReporter;                        //@synthesize propertyAccessReporter=_propertyAccessReporter - In the implementation block
@property (nonatomic,readonly) long long persistenceOptions;                                             //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (getter=isPropertyLoadingEnabled,nonatomic,readonly) BOOL propertyLoadingEnabled; 
@property (assign,nonatomic) BOOL usesIdentifyingProperties;                                             //@synthesize usesIdentifyingProperties=_usesIdentifyingProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graph;
+(id)graphWithMergedGraphs:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
+(id)dataURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphMLURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphJSONURLWithPath:(id)arg1 andName:(id)arg2 ;
+(Class)persistentStoreClass;
+(BOOL)scanGraphElementString:(id)arg1 type:(unsigned long long*)arg2 optionalName:(id*)arg3 label:(id*)arg4 optionalDomains:(id*)arg5 optionalProperties:(id*)arg6 error:(id*)arg7 ;
+(id)scanGraphConstraintString:(id)arg1 error:(id*)arg2 ;
+(BOOL)scanGraphElementOptionsString:(id)arg1 minimum:(unsigned long long*)arg2 maximum:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)scanMatchString:(id)arg1 definitions:(id*)arg2 constaints:(id*)arg3 forCreation:(BOOL)arg4 error:(id*)arg5 ;
+(id)graphWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
+(id)graphWithVisualString:(id)arg1 error:(id*)arg2 ;
+(Class)nodeClass;
+(Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClass;
+(Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(BOOL)setMarkerAtURL:(id)arg1 ;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
-(id)initWithDataRepresentation:(id)arg1 ;
-(MADatabase *)persistentStore;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)_setVersion:(unsigned long long)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(unsigned short)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_addNodeFromBase:(id)arg1 saveToDatabase:(BOOL)arg2 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)_addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 saveToDatabase:(BOOL)arg4 ;
-(void)_prepareFragmentedIdentifiers;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(BOOL)isPropertyLoadingEnabled;
-(MAPropertyAccessReporter *)propertyAccessReporter;
-(unsigned)_nextNodeIdentifier;
-(long long)persistenceOptions;
-(MALoadRegistry *)loadRegistry;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 saveToDatabase:(BOOL)arg5 ;
-(void)_addNode:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
-(void)_removeMemoryNode:(id)arg1 ;
-(id)_nodesForDomain:(unsigned long long)arg1 ;
-(BOOL)usesIdentifyingProperties;
-(id)propertiesToTestUniquenessForLabel:(id)arg1 domain:(unsigned short)arg2 fromProperties:(id)arg3 forNode:(BOOL)arg4 ;
-(id)stringForLabel:(unsigned short)arg1 ;
-(id)_keyForLabelString:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 saveToDatabase:(BOOL)arg7 ;
-(void)_addEdge:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
-(void)_removeMemoryEdge:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(id)initWithPersistenceOptions:(long long)arg1 ;
-(unsigned)_nextEdgeIdentifier;
-(void)_setLabelStrings:(id)arg1 ;
-(id)_labelStrings;
-(void)mergeReuseWithGraph:(id)arg1 ;
-(void)dumpPropertyAccessReport;
-(id)addNodeFromBase:(id)arg1 ;
-(id)nodesForIdentifiers:(id)arg1 ;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)nodesForDomains:(id)arg1 ;
-(id)nodesDomains;
-(id)identifyingPropertyKeysForNode:(id)arg1 ;
-(id)identifyingPropertyKeysForEdge:(id)arg1 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)envelopGraphForNodes:(id)arg1 throughEdgesWithLabels:(id)arg2 copyProperties:(BOOL)arg3 ;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(id)_graphDictionary;
-(void)_loadWithGraphJSONDictionary:(id)arg1 ;
-(id)_graphJSONDictionary;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(BOOL)writeGraphJSONToURL:(id)arg1 error:(id*)arg2 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteMarker;
-(id)_constraintAbstractEdgesFromAbstractNode:(id)arg1 inConstraints:(id*)arg2 ;
-(BOOL)_matchNode:(id)arg1 usingAbstractNode:(id)arg2 fromEdge:(id)arg3 atIteration:(unsigned long long)arg4 withDefinitions:(id)arg5 constraints:(id)arg6 unusedConstraints:(id)arg7 andSubGraph:(id)arg8 matchingNodeQueue:(id)arg9 ;
-(id)selectBestRootNodeForPath:(id)arg1 withDefinitions:(id)arg2 ;
-(id)matchWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
-(id)shortestPathBetweenStartNode:(id)arg1 andEndNode:(id)arg2 directed:(BOOL)arg3 ;
-(void)traversingGraphDepthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)traversingGraphBreadthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)conformsToGraphSchema:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)setMarker;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)edgesCount;
-(id)identifyingPropertyKeysForNodeDomain:(unsigned short)arg1 label:(id)arg2 ;
-(id)identifyingPropertyKeysForEdgeDomain:(unsigned short)arg1 label:(id)arg2 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)matchWithVisualString:(id)arg1 error:(id*)arg2 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)invalidateMemoryCaches;
-(BOOL)savePersistentStore;
-(void)enterBatch;
-(void)leaveBatch;
-(void)setUsesIdentifyingProperties:(BOOL)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg1 options:(long long)arg2 ;
-(BOOL)writeDataToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMarker;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)beginPropertyTransaction;
-(void)endPropertyTransaction;
-(id)matchWithVisualFormat:(id)arg1 elements:(id)arg2 error:(id*)arg3 ;
-(id)nodeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgeSchemeWithLabel:(id)arg1 domain:(unsigned short)arg2 sourceNode:(id)arg3 targetNode:(id)arg4 ;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)nodesLabels;
-(unsigned long long)nodesCount;
-(id)edgesLabels;
-(void)mergeCopyWithGraph:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 ;
-(id)schema;
-(id)initWithDataURL:(id)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)removeAllObjects;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)removeEdge:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)_nodesForLabel:(id)arg1 ;
-(id)_allNodes;
-(id)_edgesForLabel:(id)arg1 ;
-(id)_allEdges;
-(id)addNodeWithLabel:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(id)dataRepresentation:(id*)arg1 ;
@end

