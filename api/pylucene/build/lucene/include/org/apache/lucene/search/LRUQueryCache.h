#ifndef org_apache_lucene_search_LRUQueryCache_H
#define org_apache_lucene_search_LRUQueryCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace util {
        class Accountable;
      }
      namespace search {
        class QueryCache;
        class QueryCachingPolicy;
        class Query;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    namespace function {
      class Predicate;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LRUQueryCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7b2f5b9ddfcb9416,
            mid_init$_9a9e03bc2145858e,
            mid_clear_f2cc1bce94666404,
            mid_clearCoreCacheKey_d20f626183f72f7d,
            mid_clearQuery_ede25bb9d48237ac,
            mid_doCache_739d035002ca686c,
            mid_getCacheCount_2e5ae9edcb9b072f,
            mid_getCacheSize_2e5ae9edcb9b072f,
            mid_getChildResources_d4dfbf7a26ff41df,
            mid_getEvictionCount_2e5ae9edcb9b072f,
            mid_getHitCount_2e5ae9edcb9b072f,
            mid_getMissCount_2e5ae9edcb9b072f,
            mid_getTotalCount_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_cacheImpl_6ed275519b99d5d9,
            mid_onHit_79c43c6b09481002,
            mid_onMiss_79c43c6b09481002,
            mid_onQueryCache_fc246b9c0717126f,
            mid_onQueryEviction_fc246b9c0717126f,
            mid_onDocIdSetCache_f63797c6ac19e2f5,
            mid_onDocIdSetEviction_b08200bf7fe7f247,
            mid_onClear_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LRUQueryCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LRUQueryCache(const LRUQueryCache& obj) : ::java::lang::Object(obj) {}

          LRUQueryCache(jint, jlong);
          LRUQueryCache(jint, jlong, const ::java::util::function::Predicate &, jfloat);

          void clear() const;
          void clearCoreCacheKey(const ::java::lang::Object &) const;
          void clearQuery(const ::org::apache::lucene::search::Query &) const;
          ::org::apache::lucene::search::Weight doCache(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::search::QueryCachingPolicy &) const;
          jlong getCacheCount() const;
          jlong getCacheSize() const;
          ::java::util::Collection getChildResources() const;
          jlong getEvictionCount() const;
          jlong getHitCount() const;
          jlong getMissCount() const;
          jlong getTotalCount() const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LRUQueryCache);
        extern PyTypeObject *PY_TYPE(LRUQueryCache);

        class t_LRUQueryCache {
        public:
          PyObject_HEAD
          LRUQueryCache object;
          static PyObject *wrap_Object(const LRUQueryCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
