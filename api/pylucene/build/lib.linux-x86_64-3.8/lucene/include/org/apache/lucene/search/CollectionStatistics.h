#ifndef org_apache_lucene_search_CollectionStatistics_H
#define org_apache_lucene_search_CollectionStatistics_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CollectionStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_254c9abd606ca482,
            mid_docCount_2e5ae9edcb9b072f,
            mid_field_db9b55ba01e03e4b,
            mid_maxDoc_2e5ae9edcb9b072f,
            mid_sumDocFreq_2e5ae9edcb9b072f,
            mid_sumTotalTermFreq_2e5ae9edcb9b072f,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CollectionStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CollectionStatistics(const CollectionStatistics& obj) : ::java::lang::Object(obj) {}

          CollectionStatistics(const ::java::lang::String &, jlong, jlong, jlong, jlong);

          jlong docCount() const;
          ::java::lang::String field() const;
          jlong maxDoc() const;
          jlong sumDocFreq() const;
          jlong sumTotalTermFreq() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(CollectionStatistics);
        extern PyTypeObject *PY_TYPE(CollectionStatistics);

        class t_CollectionStatistics {
        public:
          PyObject_HEAD
          CollectionStatistics object;
          static PyObject *wrap_Object(const CollectionStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
