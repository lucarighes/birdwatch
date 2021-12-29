#ifndef org_apache_lucene_search_similarities_BasicStats_H
#define org_apache_lucene_search_similarities_BasicStats_H

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
        namespace similarities {

          class BasicStats : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b5c6442be7f92276,
              mid_getAvgFieldLength_8c74b787998ce4bc,
              mid_getBoost_8c74b787998ce4bc,
              mid_getDocFreq_2e5ae9edcb9b072f,
              mid_getNumberOfDocuments_2e5ae9edcb9b072f,
              mid_getNumberOfFieldTokens_2e5ae9edcb9b072f,
              mid_getTotalTermFreq_2e5ae9edcb9b072f,
              mid_setAvgFieldLength_3c435f10a3b1e038,
              mid_setDocFreq_9c778c9bce6694df,
              mid_setNumberOfDocuments_9c778c9bce6694df,
              mid_setNumberOfFieldTokens_9c778c9bce6694df,
              mid_setTotalTermFreq_9c778c9bce6694df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicStats(const BasicStats& obj) : ::java::lang::Object(obj) {}

            BasicStats(const ::java::lang::String &, jdouble);

            jdouble getAvgFieldLength() const;
            jdouble getBoost() const;
            jlong getDocFreq() const;
            jlong getNumberOfDocuments() const;
            jlong getNumberOfFieldTokens() const;
            jlong getTotalTermFreq() const;
            void setAvgFieldLength(jdouble) const;
            void setDocFreq(jlong) const;
            void setNumberOfDocuments(jlong) const;
            void setNumberOfFieldTokens(jlong) const;
            void setTotalTermFreq(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(BasicStats);
          extern PyTypeObject *PY_TYPE(BasicStats);

          class t_BasicStats {
          public:
            PyObject_HEAD
            BasicStats object;
            static PyObject *wrap_Object(const BasicStats&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
