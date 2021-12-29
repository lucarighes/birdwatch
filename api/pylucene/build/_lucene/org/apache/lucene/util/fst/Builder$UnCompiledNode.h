#ifndef org_apache_lucene_util_fst_Builder$UnCompiledNode_H
#define org_apache_lucene_util_fst_Builder$UnCompiledNode_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Builder;
          class Builder$Arc;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Builder$UnCompiledNode : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1ccf00f70d22d376,
              mid_clear_f2cc1bce94666404,
              mid_getLastOutput_b15c79acb15c2870,
              mid_isCompiled_8454bd5aa23fd11e,
              mid_prependOutput_d20f626183f72f7d,
              mid_setLastOutput_cf6732d7dfcfc293,
              max_mid
            };

            enum {
              fid_arcs,
              fid_depth,
              fid_inputCount,
              fid_isFinal,
              fid_numArcs,
              fid_output,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Builder$UnCompiledNode(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Builder$UnCompiledNode(const Builder$UnCompiledNode& obj) : ::java::lang::Object(obj) {}

            JArray< ::org::apache::lucene::util::fst::Builder$Arc > _get_arcs() const;
            void _set_arcs(const JArray< ::org::apache::lucene::util::fst::Builder$Arc > &) const;
            jint _get_depth() const;
            jlong _get_inputCount() const;
            void _set_inputCount(jlong) const;
            jboolean _get_isFinal() const;
            void _set_isFinal(jboolean) const;
            jint _get_numArcs() const;
            void _set_numArcs(jint) const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;

            Builder$UnCompiledNode(const ::org::apache::lucene::util::fst::Builder &, jint);

            void clear() const;
            ::java::lang::Object getLastOutput(jint) const;
            jboolean isCompiled() const;
            void prependOutput(const ::java::lang::Object &) const;
            void setLastOutput(jint, const ::java::lang::Object &) const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Builder$UnCompiledNode);
          extern PyTypeObject *PY_TYPE(Builder$UnCompiledNode);

          class t_Builder$UnCompiledNode {
          public:
            PyObject_HEAD
            Builder$UnCompiledNode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Builder$UnCompiledNode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Builder$UnCompiledNode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Builder$UnCompiledNode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
