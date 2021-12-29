#ifndef org_apache_lucene_search_BlockMaxDISI_H
#define org_apache_lucene_search_BlockMaxDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BlockMaxDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_f01854c732b59c55,
            mid_advance_1e143afe1894d213,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_nextDoc_9972fcc56b44e79d,
            mid_setMinCompetitiveScore_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BlockMaxDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlockMaxDISI(const BlockMaxDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          BlockMaxDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::search::Scorer &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint nextDoc() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(BlockMaxDISI);
        extern PyTypeObject *PY_TYPE(BlockMaxDISI);

        class t_BlockMaxDISI {
        public:
          PyObject_HEAD
          BlockMaxDISI object;
          static PyObject *wrap_Object(const BlockMaxDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
